#include <iostream>
#include <string>

using namespace std;

    int num_of_students;
    string id[10]={};
    string name[10]={};
    string course[10]={};
    int ask(){
        int num;
        cout<<"Press 1 to go Menu"<<endl;
        cout<<"Press 2 to finish"<<endl;
        cin>>num;
        return num;
    }
    void not_found(){
        cout<<"Data is not found!!!"<<endl;
    }
    void enter_info() {
        cout << "How many students do you want to enter? ";
        cin >> num_of_students;
        for (int i = 0; i < num_of_students; i++) {
            cout << "What is the Id of " << i + 1 << " student? ";
            cin >> id[i];
            cout << "What is the name of " << i + 1 << " student? ";
            cin >> name[i];
            cout << "What is the course of " << i + 1 << " student? ";
            cin >> course[i];
        }
        cout << "Data successfully saved!!!"<<endl;
    }
    void show_info(){
        if(num_of_students==0){
            cout << "Please, enter student info first!!!"<<endl;
        } else {
            for (int i = 0; i < num_of_students; i++) {
                if(id[i]==""){
                    continue;
                } else {
                    cout << "Id: " << id[i] << "\t\t\tName: " << name[i] << "\t\t\tCourse: " << course[i] << endl;
                    }
                }
            }
        }
        void search_info(){
            if(num_of_students==0){
                cout << "Please, enter student info first!!!"<<endl;
            } else {
                int num;
                search:
                cout << "Search by: " << endl;
                cout << "1. Id\n2. Name\n3. Course" << endl;
                cin >> num;
                switch (num) {
                    case 1: {
                        string new_id;
                        string new_id_2;
                        cout << "Enter Id: ";
                        cin >> new_id;
                        for (int i = 0; i < num_of_students; i++) {
                            if (new_id == id[i]) {
                                cout << "Id: " << id[i] << "\tName: " << name[i] << "\tCourse: " << course[i] << endl;
                                new_id_2 = id[i];
                                break;
                            }
                        } if(new_id_2 != new_id) {
                            cout << "Data is not found!!!" << endl;
                        }
                        break;
                    }
                    case 2: {
                        string new_name;
                        string new_name_2;
                        cout << "Enter name: ";
                        cin >> new_name;
                        for (int i = 0; i < num_of_students; i++) {
                            if (new_name == name[i]) {
                                cout << "Id: " << id[i] << "\tName: " << name[i] << "\tCourse: " << course[i] << endl;
                                new_name_2 = new_name;
                                break;
                            }
                        } if(new_name_2 != new_name) {
                            cout << "Data is not found!!!" << endl;
                        }

                        break;
                    }
                    case 3: {
                        string new_course;
                        string new_course_2;
                        cout << "Enter course: ";
                        cin >> new_course;
                        for (int i = 0; i < num_of_students; i++) {
                            if (new_course == course[i]) {
                                cout << "Id: " << id[i] << "\tName: " << name[i] << "\tCourse: " << course[i] << endl;
                                new_course_2=new_course;
                                break;
                                }
                            } if(new_course_2 != new_course) {
                            cout << "Data is not found!!!" << endl;
                        }

                        break;
                    }
                    default:
                        cout << "Choose from 1 to 3 " << endl;
                        goto search;

                }
            }
    }
    void update_info(){
        if(num_of_students==0){
            cout << "Please, enter student info first!!!"<<endl;
        } else {
        int num;
        choose_type:
        cout<<"Choose type: "<< endl;
        cout<<"1.Id\n2.Name\n3.Course"<<endl;
        cin>>num;
        switch (num) {
            case 1: {
                string old_id;
                string old_id_2;
                cout << "Old id: ";
                cin >> old_id;
                for (int i = 0; i < num_of_students; i++) {
                    if (old_id == id[i]) {
                        string new_id;
                        cout << "New id: ";
                        cin >> new_id;
                        id[i] = new_id;
                        cout << old_id << " succesfully changed to " << new_id << endl;
                        old_id_2=old_id;
                        break;
                    }
                }
                if(old_id_2 != old_id) {
                    cout << "Data is not found!!!" << endl;
                }
                break;
            }
            case 2: {
                string old_name;
                string old_name_2;
                cout << "Old name: ";
                cin >> old_name;
                for (int i = 0; i < num_of_students; i++) {
                    if (old_name == name[i]) {
                        string new_name;
                        cout << "New name: ";
                        cin >> new_name;
                        name[i] = new_name;
                        cout << old_name << " succesfully changed to " << new_name << endl;
                        old_name_2=old_name;
                        break;
                    }

                } if(old_name_2 != old_name) {
                    cout << "Data is not found!!!" << endl;
                }

                break;
            }
            case 3: {
                string old_course;
                string old_course_2;
                cout << "Old course: ";
                cin >> old_course;
                for (int i = 0; i < num_of_students; i++) {
                    if (old_course == course[i]) {
                        string new_course;
                        cout << "New course: ";
                        cin >> new_course;
                        course[i] = new_course;
                        cout << old_course << " succesfully changed to " << new_course << endl;
                        old_course_2 = old_course;
                        break;
                    }
                }
                if(old_course_2 != old_course) {
                    cout << "Data is not found!!!" << endl;
                }
                break;
            }
            default:
                cout << "Choose correct type!!!!" << endl;
                goto choose_type;
            }
        }
    }
    void delete_info(){
        if(num_of_students==0){
            cout << "Please, enter student info first!!!"<<endl;
        } else {

            int num;

            cout << "Delete by: \n1.Id\n2.Name\n3.Course"<<endl;
            cin>>num;
            switch (num) {
                case 1: {
                    string del_id;
                    cout << "Enter Id: ";
                    cin >> del_id;
                    for (int i = 0; i < num_of_students; i++) {
                        if (del_id == id[i]) {
                            cout <<"Id:__"<< id[i] <<"___Name:__"<<name[i]<<"___Course:__"<<course[i]<<" was deleted!!!"<<endl;
                            id[i].erase();
                            name[i].erase();
                            course[i].erase();
                            break;
                        }
                    }
                    cout << "Id is not found!!!"<<endl;
                    break;
                }
                case 2: {
                    string del_name;
                    cout << "Enter name: ";
                    cin >> del_name;
                    for (int i = 0; i < num_of_students; i++) {
                        if (del_name == name[i]) {
                            cout <<"Id:__"<< id[i] <<"___Name:__"<<name[i]<<"___Course:__"<<course[i]<<" was deleted!!!"<<endl;
                            id[i].erase();
                            name[i].erase();
                            course[i].erase();
                            break;
                        }
                    }
                    cout << "Name is not found!!!"<<endl;
                    break;
                }
                case 3: {
                    string del_course;
                    cout << "Enter course: ";
                    cin >> del_course;
                    for (int i = 0; i < num_of_students; i++) {
                        if (del_course == course[i]) {
                            cout <<"Id:__"<< id[i] <<"___Name:__"<<name[i]<<"___Course:__"<<course[i]<<" was deleted!!!"<<endl;
                            id[i].erase();
                            name[i].erase();
                            course[i].erase();
                            break;
                        }
                    }
                    cout << "Course is not found!!!"<<endl;
                    break;
                }
                default: {
                    ask();
                }
            }
        }
    }




int main(){
    int value;
    Menu:
        cout << "Enter 1 to enter  data" << endl;
        cout << "Enter 2 to show   data" << endl;
        cout << "Enter 3 to search data" << endl;
        cout << "Enter 4 to update data" << endl;
        cout << "Enter 5 to delete data" << endl;
        cout << "Enter 6 to exit" << endl;
        cin >> value;
        switch (value) {
            case 1:
                enter_info();
                if(ask()==2){
                    goto finish;
                } else goto Menu;


            case 2:
                show_info();
                if(ask()==2){
                    goto finish;
                } else goto Menu;

            case 3:
                search_info();
                if(ask()==2){
                    goto finish;
                } else goto Menu;

                case 4:
                update_info();
                if(ask()==2){
                    goto finish;
                } else goto Menu;

                case 5:
                delete_info();
                if(ask()==2){
                    goto finish;
                } else goto Menu;
                case 6:
                    goto finish;

                default:
                    cout << "Wrong input!!!\nPlease, press from 1 to 6 !!!"<<endl;
                    goto Menu;

        }
    finish:
        cout << "Thank you for choosing us!!!"<<endl;
    return 0;
}