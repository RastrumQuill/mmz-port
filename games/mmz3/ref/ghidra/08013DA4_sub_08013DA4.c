// sub_08013DA4 at 0x08013DA4 (thumb)

undefined4 sub_08013DA4(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    iVar1 = param_1 + 0xc;
    do {
      *(undefined4 *)(iVar1 + 0x68) = 0;
      iVar1 = iVar1 + -4;
    } while (param_1 <= iVar1);
    *(undefined2 *)(param_1 + 0x10) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (DAT_0202f4a4 == '\0') {
    piVar3 = (int *)(param_1 + 0x68);
    iVar1 = 3;
    do {
      iVar2 = *piVar3;
      if (iVar2 != 0) {
        *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) & 0xfc;
        *(undefined4 *)(iVar2 + 0x8c) = 0;
        *(undefined4 *)(iVar2 + 0x90) = 0;
        *(undefined *)(iVar2 + 0x94) = 0;
        *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) & 0xfb;
        *(undefined4 *)(iVar2 + 0xc) = 3;
        *(undefined4 *)(iVar2 + 0x14) =
             *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(iVar2 + 9) * 4) + 0xc);
        *piVar3 = 0;
      }
      piVar3 = piVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
    iVar1 = sub_080047C0(0x124);
    if (iVar1 != 0) {
      sub_08004768(0x124);
    }
  }
  else {
    *(short *)(param_1 + 0x10) = *(short *)(param_1 + 0x10) + 1;
    uVar4 = 0;
    piVar3 = (int *)(param_1 + 0x68);
    do {
      if (*piVar3 == 0) {
        iVar1 = sub_080D8A60(uVar4 & 0xff);
        *piVar3 = iVar1;
      }
      piVar3 = piVar3 + 1;
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < 4);
    iVar1 = sub_080047C0(0x124);
    if (iVar1 == 0) {
      sub_0800471C(0x124);
    }
    if (((*(ushort *)(param_1 + 0x10) & 1) != 0) &&
       (uVar4 = DAT_0202f4ac * 0x343fd + 0x269ec3, DAT_0202f4ac = uVar4 & 0x7fffffff,
       (uVar4 * 2 >> 0x11 & 1) != 0)) {
      DAT_02002402 = 0xc0a;
      return in_lr;
    }
  }
  DAT_02002402 = 0xc04;
  return in_lr;
}

