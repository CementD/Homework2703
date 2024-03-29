#include <iostream>
#include <cstring>

using namespace std;

class Contact {
private:
    char* fullName;
    char* homePhone;
    char* workPhone;
    char* mobilePhone;
    char* additionalInfo;

public:
    Contact() : fullName(nullptr), homePhone(nullptr), workPhone(nullptr), mobilePhone(nullptr), additionalInfo(nullptr) {}
    Contact(const char* name, const char* home, const char* work, const char* mobile, const char* additional) {
        fullName = new char[strlen(name) + 1];
        for (int i = 0; name[i] != '\0'; i++)
            fullName[i] = name[i];
        fullName[strlen(name)] = '\0';

        homePhone = new char[strlen(home) + 1];
        for (int i = 0; home[i] != '\0'; i++)
            homePhone[i] = home[i];
        homePhone[strlen(home)] = '\0';

        workPhone = new char[strlen(work) + 1];
        for (int i = 0; work[i] != '\0'; i++)
            workPhone[i] = work[i];
        workPhone[strlen(work)] = '\0';

        mobilePhone = new char[strlen(mobile) + 1];
        for (int i = 0; mobile[i] != '\0'; i++)
            mobilePhone[i] = mobile[i];
        mobilePhone[strlen(mobile)] = '\0';

        additionalInfo = new char[strlen(additional) + 1];
        for (int i = 0; additional[i] != '\0'; i++)
            additionalInfo[i] = additional[i];
        additionalInfo[strlen(additional)] = '\0';
    }
    ~Contact() {
        delete[] fullName;
        delete[] homePhone;
        delete[] workPhone;
        delete[] mobilePhone;
        delete[] additionalInfo;
    }
    const char* getFullName() const { return fullName; }
    const char* getHomePhone() const { return homePhone; }
    const char* getWorkPhone() const { return workPhone; }
    const char* getMobilePhone() const { return mobilePhone; }
    const char* getAdditionalInfo() const { return additionalInfo; }
    void setFullName(const char* name) {
        delete[] fullName;
        fullName = new char[strlen(name) + 1];
        for (int i = 0; name[i] != '\0'; i++)
            fullName[i] = name[i];
        fullName[strlen(name)] = '\0';
    }

    void setHomePhone(const char* phone) {
        delete[] homePhone;
        homePhone = new char[strlen(phone) + 1];
        for (int i = 0; phone[i] != '\0'; i++)
            homePhone[i] = phone[i];
        homePhone[strlen(phone)] = '\0';
    }

    void setWorkPhone(const char* phone) {
        delete[] workPhone;
        workPhone = new char[strlen(phone) + 1];
        for (int i = 0; phone[i] != '\0'; i++)
            workPhone[i] = phone[i];
        workPhone[strlen(phone)] = '\0';
    }

    void setMobilePhone(const char* phone) {
        delete[] mobilePhone;
        mobilePhone = new char[strlen(phone) + 1];
        for (int i = 0; phone[i] != '\0'; i++)
            mobilePhone[i] = phone[i];
        mobilePhone[strlen(phone)] = '\0';
    }

    void setAdditionalInfo(const char* info) {
        delete[] additionalInfo;
        additionalInfo = new char[strlen(info) + 1];
        for (int i = 0; info[i] != '\0'; i++)
            additionalInfo[i] = info[i];
        additionalInfo[strlen(info)] = '\0';
    }
};

int main() {
    Contact contact("Domin Semen", "14123488", "14567888", "149012388", "Additional information");
    cout << "Full Name: " << contact.getFullName() << endl;
    cout << "Home Phone: " << contact.getHomePhone() << endl;
    cout << "Work Phone: " << contact.getWorkPhone() << endl;
    cout << "Mobile Phone: " << contact.getMobilePhone() << endl;
    cout << "Additional Information: " << contact.getAdditionalInfo() << endl;
    return 0;
}
