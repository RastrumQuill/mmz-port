// sub_08061F6C at 0x08061F6C (thumb)

undefined4 sub_08061F6C(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    if (((DAT_0202ec38 & 1) != 0) && ((DAT_0202ec42 & 1) == 0)) {
      DAT_0202ec38 = DAT_0202ec38 & 0xfffe | 0x20;
    }
    *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) & 0xfffffc04;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
switchD_08061f80_caseD_1:
    cVar1 = sub_08002EA0(0x3a);
    if (cVar1 == '\x04') {
      sub_08002EF0(0x3a);
LAB_0806205a:
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
switchD_08061f80_caseD_6:
    return in_lr;
  case 1:
    goto switchD_08061f80_caseD_1;
  case 2:
    *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) | 0x60;
    *(undefined *)(param_1 + 0x12) = 0x3c;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 3:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != '\0') {
      return in_lr;
    }
    goto LAB_0806205a;
  case 4:
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 5:
    iVar2 = *(int *)(param_1 + 0x60) + 0x10;
    *(int *)(param_1 + 0x60) = iVar2;
    *(uint *)(param_1 + 0x54) =
         *(int *)(param_1 + 0x54) + 0x80 + (uint)*(byte *)(param_1 + 0x10) * -0x100;
    iVar2 = *(int *)(param_1 + 0x58) + iVar2;
    *(int *)(param_1 + 0x58) = iVar2;
    if (*(int *)(param_1 + 0xbc) + 0x1f000 < iVar2) {
      *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) & 0xffffff9f;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      DAT_0202ec42 = DAT_0202ec42 | 2;
      sub_080032EC(0xe6);
      sub_08015518(3,param_1 + 0x54);
    }
  default:
    goto switchD_08061f80_caseD_6;
  }
}

