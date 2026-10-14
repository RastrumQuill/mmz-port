// sub_08046EAC at 0x08046EAC (thumb)

undefined4 sub_08046EAC(int param_1)

{
  undefined uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xa50c);
    *(undefined *)(*(int *)(param_1 + 0xc0) + 0x11) = 1;
    iVar2 = sub_08079798(param_1,1,0);
    *(int *)(param_1 + 0xc0) = iVar2;
    *(undefined *)(param_1 + 0x12) = 0x40;
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (*(char *)(param_1 + 0x71) != '\0') goto LAB_08046f18;
    uVar1 = 1;
  }
  else {
    if (*(char *)(param_1 + 0x71) != '\x01') goto LAB_08046f18;
    sub_080032EC(0x36);
    uVar1 = 0;
  }
  *(undefined *)(param_1 + 0xf) = uVar1;
LAB_08046f18:
  if ((*(uint *)(param_1 + 0x8c) & 0x800) == 0) {
    sub_08006E08(param_1 + 0x74,&DAT_0833aaac);
    *(undefined *)(param_1 + 0xd) = 0xc;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

