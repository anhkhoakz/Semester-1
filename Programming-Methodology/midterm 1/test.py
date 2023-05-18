def group_list(group, users):
    members = ', '.join(users)
    return " {}: {} ".format(group, users)


# Should be "Marketing: Mike, Karen, Jake, Tasha"
print(group_list("Marketing", ["Mike", "Karen", "Jake", "Tasha"]))
# Should be "Engineering: Kim, Jay, Tom"
print(group_list("Engineering", ["Kim", "Jay", "Tom"]))
print(group_list("Users", ""))  # Should be "Users:"


def group_list(group, users):
    members = ", ".join(users)
    return (" {}:  {}".format(group, members))


# Should be  "Marketing: Mike, Karen, Jake,  Tasha"
print(group_list("Marketing", ["Mike",  "Karen", "Jake", "Tasha"]))
# Should be  "Engineering: Kim, Jay,  Tom"
print(group_list("Engineering",  ["Kim", "Jay", "Tom"]))
print(group_list("Users", ""))  # Should be "Users:"
