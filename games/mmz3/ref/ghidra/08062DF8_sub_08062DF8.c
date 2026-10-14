// sub_08062DF8 at 0x08062DF8 (thumb)

undefined4 sub_08062DF8(int param_1)

{
  char cVar1;
  undefined uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x54);
  *(int *)(param_1 + 0x58) = *(int *)(*(int *)(param_1 + 0x28) + 0x58) + -0x1200;
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    if (*(char *)(param_1 + 0x13) == '\x01') {
      iVar9 = *(int *)(param_1 + 100) + 1;
    }
    else {
      iVar9 = 0;
    }
    *(int *)(param_1 + 100) = iVar9;
    *(undefined *)(param_1 + 0x13) = 1;
    uVar6 = 0xd60a;
    break;
  case 1:
  case 3:
    goto switchD_08062e1a_caseD_1;
  case 2:
    sub_08061B30(param_1,0x1400,0xffffbb00);
    iVar9 = -0xb00;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      iVar9 = 0xb00;
    }
    iVar5 = (int)((uint)*(ushort *)(param_1 + 0xb8) << 0x10) >> 0x18;
    iVar7 = (int)*(short *)((int)&DAT_080fe64c + ((uint)((iVar5 + 0x40) * 0x1000000) >> 0x17));
    iVar3 = iVar7 * iVar9;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    iVar8 = (int)*(short *)((int)&DAT_080fe64c + ((uint)(iVar5 << 0x18) >> 0x17));
    iVar5 = iVar8 * 0x1500;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
    iVar8 = iVar8 * iVar9;
    if (iVar8 < 0) {
      iVar8 = iVar8 + 0xff;
    }
    iVar7 = iVar7 * -0x1500;
    if (iVar7 < 0) {
      iVar7 = iVar7 + 0xff;
    }
    sub_0800471C(0x12f);
    sub_080B1118(*(int *)(param_1 + 0x54) + (iVar3 >> 8) + (iVar5 >> 8),
                 *(int *)(param_1 + 0x58) + (iVar8 >> 8) + (iVar7 >> 8),
                 *(byte *)(param_1 + 10) >> 4 & 1);
    uVar6 = 0xd60c;
    break;
  case 4:
    *(undefined4 *)(param_1 + 0x68) = 0x2d;
    sub_080177CC(param_1,0xd603,10,1);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    iVar9 = *(int *)(param_1 + 0x68) + -1;
    *(int *)(param_1 + 0x68) = iVar9;
    if (iVar9 == 0) {
      cVar1 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar1;
      if (cVar1 == '\0') {
        uVar2 = 0xd;
LAB_08062f8c:
        *(undefined *)(param_1 + 0xd) = uVar2;
      }
      else if ((0 < *(int *)(param_1 + 100)) ||
              (uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3, DAT_0202f608 = uVar4 & 0x7fffffff,
              (uVar4 * 2 >> 0x11 & 0xf) < 5)) {
        uVar2 = 0xb;
        goto LAB_08062f8c;
      }
      *(undefined *)(param_1 + 0xe) = 0;
    }
    sub_080177F4(param_1);
  default:
    goto switchD_08062e1a_caseD_6;
  }
  sub_08017700(param_1,uVar6);
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_08062e1a_caseD_1:
  sub_080177F4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
switchD_08062e1a_caseD_6:
  return in_lr;
}

