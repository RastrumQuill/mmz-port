// sub_08052C24 at 0x08052C24 (thumb)

undefined4 sub_08052C24(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    iVar3 = *(int *)(param_1 + 0xc0);
    if ((*(uint *)(param_1 + 0xb8) & 1) == 0) {
      if (*(char *)(param_1 + 0xe) != '\x03') {
        *(undefined4 *)(param_1 + 0x58) = 0;
      }
      sub_080033F0(param_1 + 0x6c,3);
      *(undefined *)(param_1 + 0x12) = 0x20;
LAB_08052cde:
      *(undefined *)(param_1 + 0x13) = 1;
    }
    else {
      if ((*(uint *)(param_1 + 0xb8) & 2) != 0) {
        sub_080033F0(param_1 + 0x6c,3);
        *(undefined *)(param_1 + 0x12) = 1;
        goto LAB_08052cde;
      }
      if (*(char *)(param_1 + 0xe) != '\x03') {
        *(undefined4 *)(param_1 + 0x58) = 0;
      }
      sub_080033F0(param_1 + 0x6c,5);
      *(undefined *)(param_1 + 0x12) = 0x18;
      local_1c = *(int *)(param_1 + 0x4c) + 0x800 + (uint)(0 < iVar3) * -0x1000;
      local_18 = *(int *)(param_1 + 0x50) + -0x800;
      sub_0808B2D4(param_1);
      *(undefined *)(param_1 + 0x13) = 0;
    }
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 1:
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
    iVar3 = *(int *)(param_1 + 0x54) * 0xfa;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    *(int *)(param_1 + 0x54) = iVar3 >> 8;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x40;
    sub_0805285C(param_1);
    if (((*(char *)(param_1 + 0x13) != '\0') &&
        (cVar1 = sub_080C8CB0(*(undefined *)(param_1 + 0x12),6), cVar1 == '\0')) &&
       (0x280 < *(int *)(param_1 + 0x54) + 0x140U)) {
      sub_0808827C(3,param_1 + 0x4c);
    }
    if ((*(byte *)(param_1 + 0x12) & 2) == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 1;
    }
    *(byte *)(param_1 + 10) = bVar2;
    cVar1 = *(byte *)(param_1 + 0x12) - 1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\0') {
LAB_08052e3e:
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
    break;
  case 2:
    if (((*(uint *)(param_1 + 0xb8) & 1) == 0) || ((*(uint *)(param_1 + 0xb8) & 2) != 0)) {
      *(undefined *)(param_1 + 0x12) = 1;
    }
    else {
      sub_080033F0(param_1 + 0x6c,4);
      *(undefined *)(param_1 + 0x12) = 0x18;
    }
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 3:
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
    iVar3 = *(int *)(param_1 + 0x54) * 0xfa;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    *(int *)(param_1 + 0x54) = iVar3 >> 8;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x20;
    sub_0805285C(param_1);
    if ((*(byte *)(param_1 + 0x12) & 2) == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 1;
    }
    *(byte *)(param_1 + 10) = bVar2;
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\0') {
      local_1c = *(int *)(param_1 + 0x4c);
      local_18 = (uint)*(byte *)(param_1 + 0x13) * 0x800 + *(int *)(param_1 + 0x50) + -0xc00;
      sub_0808827C(1,&local_1c);
      iVar3 = param_1 + 0x4c;
      sub_0808B31C(param_1,iVar3);
      sub_08001EAC(2);
      sub_08015698(3,iVar3);
      if (DAT_02022b2c < 9999) {
        DAT_02022b2c = DAT_02022b2c + 1;
      }
      sub_08015794(param_1,iVar3);
      goto LAB_08052e3e;
    }
    break;
  case 4:
    *(undefined *)(param_1 + 0x12) = 8;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  case 5:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\0') {
      *(undefined4 *)(param_1 + 0xc) = 4;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
    }
  default:
    goto switchD_08052c3a_caseD_6;
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
switchD_08052c3a_caseD_6:
  return in_lr;
}

