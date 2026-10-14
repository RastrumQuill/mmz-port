// sub_08015FCC at 0x08015FCC (thumb)

undefined4 sub_08015FCC(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar1 = *(uint *)(param_1 + 0x5c);
    iVar2 = param_1 + 0xc;
    do {
      *(undefined4 *)(iVar2 + 0x68) = 0;
      iVar2 = iVar2 + -4;
    } while (param_1 <= iVar2);
    (&DAT_020023c4)[(uVar1 & 0xffff) >> 4] = (&DAT_020023c4)[(uVar1 & 0xffff) >> 4] & 0xfffc | 2;
    *(undefined2 *)(param_1 + 0x10) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (DAT_0202f4a6 == '\0') {
    piVar4 = (int *)(param_1 + 0x68);
    iVar2 = 3;
    do {
      iVar3 = *piVar4;
      if (iVar3 != 0) {
        *(byte *)(iVar3 + 10) = *(byte *)(iVar3 + 10) & 0xfc;
        *(undefined4 *)(iVar3 + 0x8c) = 0;
        *(undefined4 *)(iVar3 + 0x90) = 0;
        *(undefined *)(iVar3 + 0x94) = 0;
        *(byte *)(iVar3 + 10) = *(byte *)(iVar3 + 10) & 0xfb;
        *(undefined4 *)(iVar3 + 0xc) = 3;
        *(undefined4 *)(iVar3 + 0x14) =
             *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(iVar3 + 9) * 4) + 0xc);
        *piVar4 = 0;
      }
      piVar4 = piVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
    iVar2 = sub_080047C0(0x124);
    if (iVar2 != 0) {
      sub_08004768(0x124);
    }
  }
  else {
    *(short *)(param_1 + 0x10) = *(short *)(param_1 + 0x10) + 1;
    uVar1 = 0;
    piVar4 = (int *)(param_1 + 0x68);
    do {
      if (*piVar4 == 0) {
        iVar2 = sub_080D8A60(uVar1 & 0xff);
        *piVar4 = iVar2;
      }
      piVar4 = piVar4 + 1;
      uVar1 = uVar1 + 1;
    } while ((int)uVar1 < 4);
    iVar2 = sub_080047C0(0x124);
    if (iVar2 == 0) {
      sub_0800471C(0x124);
    }
    if (((*(ushort *)(param_1 + 0x10) & 1) != 0) &&
       (uVar1 = DAT_0202f608 * 0x343fd + 0x269ec3, DAT_0202f608 = uVar1 & 0x7fffffff,
       (uVar1 * 2 >> 0x11 & 1) != 0)) {
      DAT_02002402 = 0xc0a;
      return in_lr;
    }
  }
  DAT_02002402 = 0xc04;
  return in_lr;
}

