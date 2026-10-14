// sub_0804AFDC at 0x0804AFDC (thumb)

undefined4 sub_0804AFDC(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0xb4);
  uVar3 = *(undefined4 *)(param_1 + 0xb8);
  if (*(byte *)(iVar6 + 0xc) < 2) {
    sub_0801CFF0(param_1);
    if (*(char *)(param_1 + 0x10) == '\0') {
      if ((*(uint *)(param_1 + 0x8c) & 0x1000) != 0) {
        sub_08002B10(0x2b);
      }
      bVar1 = *(char *)(param_1 + 0x12) - 1;
      *(byte *)(param_1 + 0x12) = bVar1;
      if (bVar1 != 0) {
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
        if (bVar1 < 0xc) {
          *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
          iVar6 = 0xc - (uint)*(byte *)(param_1 + 0x12);
          iVar4 = FUN_081288bc(iVar6 * 0x100,0xc);
          iVar5 = FUN_081288bc(iVar6 * -0x100,0xc);
          iVar5 = iVar5 + 0x100;
          iVar6 = iVar4 + 0x100;
        }
        else {
          iVar5 = 0x100;
          iVar6 = iVar5;
        }
        *(short *)(param_1 + 0x50) = (short)iVar6;
        *(short *)(param_1 + 0x52) = (short)iVar5;
        iVar6 = iVar5 + 0x10;
        if (iVar6 < 0) {
          iVar6 = iVar5 + 0x2f;
        }
        iVar6 = iVar6 >> 5;
        if (iVar6 == 0) {
          return in_lr;
        }
        cVar2 = sub_0803A4F4(uVar3);
        if (7 < iVar6) {
          iVar6 = 7;
        }
        sub_08005794(param_1 + 0x74,&DAT_08853ee8 + iVar6 * 0x30,cVar2 + '\b',0xffffffff,0xffffffff,
                     0xffffffff);
        return in_lr;
      }
    }
    else if (*(byte *)(iVar6 + 0xc) < 2) {
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar6 + 0x54);
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar6 + 0x58);
      *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(iVar6 + 0x50);
      *(undefined2 *)(param_1 + 0x52) = *(undefined2 *)(iVar6 + 0x52);
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 8);
    sub_0804B140(param_1);
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}

