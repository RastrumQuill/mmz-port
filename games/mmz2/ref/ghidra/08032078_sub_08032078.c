// sub_08032078 at 0x08032078 (thumb)

undefined8 sub_08032078(int param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 in_lr;
  
  sub_08037E20();
  uVar2 = (uint)*(byte *)(param_1 + 0x182);
  if (uVar2 < 100) {
    if (((*(byte *)(param_1 + 0x202) & 4) == 0) && (*(char *)(param_1 + 0x1fc) != '\x05')) {
LAB_080320cc:
      iVar6 = 0x200;
    }
    else {
      uVar1 = DAT_0202ec34;
      if (*(char *)(param_1 + 0x10) != '\0') {
        uVar1 = DAT_0202ec36;
      }
      if ((uVar1 & 0x8000) != 0) goto LAB_080320cc;
      iVar6 = 0x280;
    }
    if (((*(byte *)(param_1 + 0x202) & 4) == 0) && (*(char *)(param_1 + 0x1fc) != '\x05')) {
LAB_08032114:
      iVar3 = uVar2 << 9;
    }
    else {
      uVar1 = DAT_0202ec34;
      if (*(char *)(param_1 + 0x10) != '\0') {
        uVar1 = DAT_0202ec36;
      }
      if ((uVar1 & 0x8000) != 0) goto LAB_08032114;
      iVar3 = uVar2 * 0x280;
    }
    iVar3 = sub_080EF150(iVar3,100);
    iVar6 = iVar6 - iVar3;
  }
  else {
    iVar6 = 0;
  }
  *(int *)(param_1 + 0xc4) = iVar6;
  *(undefined4 *)(param_1 + 0x68) = 0x40;
  pcVar4 = (char *)(param_1 + 0x175);
  if (*pcVar4 == '\x02') {
    if ((0 < (int)*(char *)(param_1 + 0x2e6) * (int)*(short *)(param_1 + 0x2e8)) &&
       (iVar6 = (((int)((uint)*(ushort *)(param_1 + 0x2ee) * 0x1c0) >> 0xe) + 0x100) * 2 *
                (int)(short)(&DAT_080ef450)
                            [(*(short *)(param_1 + 0x2e8) + 0x4080 >> 8) +
                             *(char *)(param_1 + 0x2e6) * 0x40 & 0xff] >> 8, iVar6 < 0)) {
      *pcVar4 = *(char *)(param_1 + 0xe);
      *(undefined2 *)(param_1 + 0xe) = 0x401;
      if (*(byte *)(param_1 + 0x176) < 3) {
        sub_0801EA38(param_1,5,1,1);
      }
      *(int *)(param_1 + 0x60) = iVar6;
      uVar5 = 1;
      goto LAB_080321da;
    }
  }
  *pcVar4 = *(char *)(param_1 + 0xe);
  *(undefined2 *)(param_1 + 0xe) = 2;
  *(undefined4 *)(param_1 + 0x60) = 0x40;
  uVar5 = 2;
LAB_080321da:
  return CONCAT44(in_lr,uVar5);
}

