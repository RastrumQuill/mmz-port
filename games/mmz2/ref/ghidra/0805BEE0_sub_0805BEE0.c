// sub_0805BEE0 at 0x0805BEE0 (thumb)

undefined4 sub_0805BEE0(int param_1)

{
  char cVar1;
  undefined uVar2;
  int iVar3;
  undefined4 in_lr;
  int local_10;
  int local_c;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xa90f);
    sub_080032EC(0x72);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      local_10 = *(int *)(param_1 + 0x54) + 0x100;
    }
    else {
      local_10 = *(int *)(param_1 + 0x54) + -0x100;
    }
    local_c = *(int *)(param_1 + 0x58) + -0x4000;
    sub_080AC60C(1,&local_10);
    iVar3 = *(int *)(param_1 + 0xd0);
    if (((*(uint *)(iVar3 + 0x8c) & 0x200) == 0) && (*(short *)(iVar3 + 0xa4) != 0)) {
      sub_08022EA8(iVar3,0,0,0xfffff500,0,0x40,0x40,0);
    }
    sub_08015518(8,param_1 + 0x54);
    *(undefined *)(param_1 + 0x12) = 0x10;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    if (((DAT_0202ec42 & 1) == 0) && (*(char *)(param_1 + 0xbe) != '\0')) {
      uVar2 = 0x20;
    }
    else {
      uVar2 = 0x23;
    }
    *(undefined *)(param_1 + 0xd) = uVar2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

