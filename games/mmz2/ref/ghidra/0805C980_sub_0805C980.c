// sub_0805C980 at 0x0805C980 (thumb)

undefined4 sub_0805C980(int param_1)

{
  int iVar1;
  char cVar2;
  undefined uVar3;
  undefined4 in_lr;
  int local_14;
  undefined4 local_10;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xa919);
    iVar1 = DAT_0202e130;
    local_10 = *(undefined4 *)(DAT_0202e130 + 0x58);
    cVar2 = sub_080EF330(*(undefined *)(param_1 + 0x13),3);
    if (cVar2 == '\0') {
      local_14 = *(int *)(iVar1 + 0x54);
      *(int *)(param_1 + 100) = local_14;
      local_14 = local_14 + 0x4000;
      sub_080A41E4(&local_14,0,0);
      local_14 = *(int *)(param_1 + 100) + -0x4000;
      sub_080A41E4(&local_14,0,0);
      uVar3 = 0x20;
    }
    else if (cVar2 == '\x01') {
      local_14 = *(int *)(param_1 + 100) + 0x2000;
      sub_080A41E4(&local_14,0,1);
      local_14 = *(int *)(param_1 + 100) + -0x2000;
      sub_080A41E4(&local_14,0,1);
      local_14 = *(int *)(param_1 + 100) + 0x6000;
      sub_080A41E4(&local_14,0,1);
      local_14 = *(int *)(param_1 + 100) + -0x6000;
      sub_080A41E4(&local_14,0,1);
      uVar3 = 0x20;
    }
    else {
      local_14 = *(int *)(param_1 + 100);
      sub_080A41E4(&local_14,0,0);
      local_14 = *(int *)(param_1 + 100) + 0x8000;
      sub_080A41E4(&local_14,0,0);
      local_14 = *(int *)(param_1 + 100) + -0x8000;
      sub_080A41E4(&local_14,0,0);
      uVar3 = 0x48;
    }
    *(undefined *)(param_1 + 0x12) = uVar3;
    sub_080032EC(0x72);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == -1) {
    cVar2 = *(char *)(param_1 + 0x13);
    *(char *)(param_1 + 0x13) = cVar2 + '\x01';
    if (8 < (byte)(cVar2 + 1U)) {
      *(undefined *)(param_1 + 0xd) = 0x2f;
    }
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

