// sub_080A077C at 0x080A077C (thumb)

undefined4 sub_080A077C(int param_1)

{
  undefined uVar1;
  char cVar2;
  undefined4 in_lr;
  int local_10;
  int local_c;
  
  local_10 = *(int *)(param_1 + 0x4c);
  local_c = *(undefined4 *)(param_1 + 0x50);
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_0809C930(param_1,0);
    *(undefined *)(param_1 + 0xe) = 0;
    if (*(char *)(param_1 + 0x10) == '\x01') {
      uVar1 = 0x88;
    }
    else {
      uVar1 = 0x70;
    }
    *(undefined *)(param_1 + 0x12) = uVar1;
  }
  sub_0809C980(param_1);
  if (*(char *)(param_1 + 0x12) == ' ') {
    local_10 = *(int *)(param_1 + 0x4c) + -0x2000;
    local_c = *(int *)(param_1 + 0x50) + -0x1800;
    sub_08074A24(&local_10,0,1);
  }
  else if (*(char *)(param_1 + 0x12) == '\x10') {
    local_10 = *(int *)(param_1 + 0x4c) + -0x2000;
    local_c = *(int *)(param_1 + 0x50) + -0x800;
    sub_08074A24(&local_10,0,1);
  }
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == -1) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

