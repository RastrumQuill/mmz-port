// sub_0807547C at 0x0807547C (thumb)

undefined4 sub_0807547C(int param_1)

{
  undefined uVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  char cVar5;
  byte *pbVar6;
  int iVar7;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    break;
  case 1:
    goto switchD_08075492_caseD_1;
  case 2:
    iVar4 = (int)*(char *)(param_1 + 0xb4) + (uint)*(ushort *)(param_1 + 0xc0);
    *(ushort *)(param_1 + 0xc0) = (ushort)iVar4;
    sVar2 = *(short *)((int)&DAT_080fe64c + ((uint)(iVar4 * 0x1000000) >> 0x17));
    *(short *)(param_1 + 0xc2) = sVar2;
    iVar4 = *(int *)(param_1 + 0x5c) + ((0x3800 - *(int *)(param_1 + 0x5c)) * 8 >> 8);
    *(int *)(param_1 + 0x5c) = iVar4;
    iVar7 = iVar4 * sVar2 >> 0x10;
    *(int *)(param_1 + 0x60) = iVar7;
    sVar2 = *(short *)((int)&DAT_080fe64c + ((uint)((iVar7 + 0x40) * 0x1000000) >> 0x17));
    *(int *)(param_1 + 0x54) =
         ((int)*(short *)((int)&DAT_080fe64c + ((uint)(iVar7 << 0x18) >> 0x17)) *
          *(int *)(param_1 + 0xbc) >> 8) + *(int *)(param_1 + 100);
    iVar4 = *(int *)(param_1 + 0xbc);
    goto LAB_08075782;
  default:
    goto switchD_08075492_caseD_3;
  case 5:
    iVar4 = *(int *)(param_1 + 0x60);
    iVar7 = *(int *)(param_1 + 0x5c);
    if (iVar4 < iVar7) {
      *(int *)(param_1 + 0x60) = iVar4 + 3;
      if (iVar7 <= iVar4 + 3) {
        uVar3 = *(undefined4 *)(param_1 + 0x54);
        iVar4 = *(int *)(param_1 + 0x58);
LAB_0807569c:
        sVar2 = sub_0800DC84(uVar3,iVar4 + -0x800);
        if (sVar2 == 1) {
          sub_08075814(param_1,0);
          sub_0800471C(0x2d);
        }
        *(undefined4 *)(param_1 + 0x5c) = 0x4000;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
    }
    else {
      *(int *)(param_1 + 0x60) = iVar4 + -3;
      if (iVar4 + -3 <= iVar7) {
        uVar3 = *(undefined4 *)(param_1 + 0x54);
        iVar4 = *(int *)(param_1 + 0x58);
        goto LAB_0807569c;
      }
    }
    iVar4 = *(int *)(param_1 + 0x60);
    cVar5 = (char)iVar4;
    sVar2 = *(short *)((int)&DAT_080fe64c + ((uint)((iVar4 + 0x40) * 0x1000000) >> 0x17));
    *(int *)(param_1 + 0x54) =
         ((int)*(short *)((int)&DAT_080fe64c + ((uint)(iVar4 << 0x18) >> 0x17)) *
          *(int *)(param_1 + 0xbc) >> 8) + *(int *)(param_1 + 100);
    iVar4 = (int)sVar2 * *(int *)(param_1 + 0xbc);
    goto LAB_080756f2;
  case 6:
    iVar4 = (int)*(char *)(param_1 + 0xb4) + (uint)*(ushort *)(param_1 + 0xc0);
    *(ushort *)(param_1 + 0xc0) = (ushort)iVar4;
    sVar2 = *(short *)((int)&DAT_080fe64c + ((uint)(iVar4 * 0x1000000) >> 0x17));
    *(short *)(param_1 + 0xc2) = sVar2;
    iVar4 = *(int *)(param_1 + 0x5c) + ((0x3800 - *(int *)(param_1 + 0x5c)) * 8 >> 8);
    *(int *)(param_1 + 0x5c) = iVar4;
    iVar7 = iVar4 * sVar2 >> 0x10;
    *(int *)(param_1 + 0x60) = iVar7;
    sVar2 = *(short *)((int)&DAT_080fe64c + ((uint)((iVar7 + 0x40) * 0x1000000) >> 0x17));
    *(int *)(param_1 + 0x54) =
         ((int)*(short *)((int)&DAT_080fe64c + ((uint)(iVar7 << 0x18) >> 0x17)) *
          *(int *)(param_1 + 0xbc) >> 8) + *(int *)(param_1 + 100);
    iVar4 = *(int *)(param_1 + 0xbc);
LAB_08075782:
    *(int *)(param_1 + 0x58) = (sVar2 * iVar4 >> 8) + *(int *)(param_1 + 0x68);
    *(char *)(param_1 + 0x24) = -(char)iVar7;
    sub_080177F4(param_1);
    if ((*(char *)(param_1 + 0x12) == '\0') ||
       (cVar5 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar5, cVar5 == '\0')) {
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    goto switchD_08075492_caseD_3;
  }
  sub_08007390(param_1 + 0x74,&DAT_08363854);
  if (*(int *)(DAT_0202f5c0 + 0x54) < *(int *)(param_1 + 0x54)) {
    pbVar6 = (byte *)(param_1 + 0xb4);
    if (*(short *)((int)&DAT_080fe64c +
                  (((uint)*pbVar6 + (uint)*(byte *)(undefined2 *)(param_1 + 0xc0)) * 0x1000000 >>
                  0x17)) < *(short *)(param_1 + 0xc2)) {
      *pbVar6 = -*pbVar6;
    }
    *(undefined4 *)(param_1 + 0x5c) = 0x40;
    *(undefined2 *)(param_1 + 0xc0) = 0x40;
    *pbVar6 = 2;
    uVar1 = 1;
  }
  else {
    pbVar6 = (byte *)(param_1 + 0xb4);
    if (*(short *)((int)&DAT_080fe64c +
                  (((uint)*pbVar6 + (uint)*(byte *)(undefined2 *)(param_1 + 0xc0)) * 0x1000000 >>
                  0x17)) < *(short *)(param_1 + 0xc2)) {
      *pbVar6 = -*pbVar6;
    }
    *(undefined4 *)(param_1 + 0x5c) = 0xffffffc0;
    *(undefined2 *)(param_1 + 0xc0) = 0xc0;
    *pbVar6 = 2;
    uVar1 = 5;
  }
  *(undefined *)(param_1 + 0xe) = uVar1;
  *(undefined *)(param_1 + 0x12) = 0xf0;
switchD_08075492_caseD_1:
  iVar4 = *(int *)(param_1 + 0x60);
  iVar7 = *(int *)(param_1 + 0x5c);
  if (iVar4 < iVar7) {
    *(int *)(param_1 + 0x60) = iVar4 + 3;
    if (iVar7 <= iVar4 + 3) {
LAB_0807558e:
      sVar2 = sub_0800DC84();
      if (sVar2 == 1) {
        sub_08075814(param_1,0);
        sub_0800471C(0x2d);
      }
      *(undefined4 *)(param_1 + 0x5c) = 0x4000;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
  }
  else {
    *(int *)(param_1 + 0x60) = iVar4 + -3;
    if (iVar4 + -3 <= iVar7) goto LAB_0807558e;
  }
  iVar4 = *(int *)(param_1 + 0x60);
  cVar5 = (char)iVar4;
  sVar2 = *(short *)((int)&DAT_080fe64c + ((uint)((iVar4 + 0x40) * 0x1000000) >> 0x17));
  *(int *)(param_1 + 0x54) =
       ((int)*(short *)((int)&DAT_080fe64c + ((uint)(iVar4 << 0x18) >> 0x17)) *
        *(int *)(param_1 + 0xbc) >> 8) + *(int *)(param_1 + 100);
  iVar4 = (int)sVar2 * *(int *)(param_1 + 0xbc);
LAB_080756f2:
  *(int *)(param_1 + 0x58) = (iVar4 >> 8) + *(int *)(param_1 + 0x68);
  *(char *)(param_1 + 0x24) = -cVar5;
  sub_080177F4(param_1);
switchD_08075492_caseD_3:
  return in_lr;
}

