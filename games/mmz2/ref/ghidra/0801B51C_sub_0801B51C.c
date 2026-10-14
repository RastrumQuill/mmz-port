// sub_0801B51C at 0x0801B51C (thumb)

undefined4 sub_0801B51C(byte param_1,char *param_2)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined4 in_lr;
  
  uVar5 = (uint)param_1;
  iVar3 = uVar5 * 0x10;
  piVar4 = (int *)(&DAT_0202ec50 + iVar3);
  if (*piVar4 == 0) {
    if ((*param_2 == '\0') && (param_2[2] != '\0')) {
      iVar1 = sub_0801E5DC();
      if (iVar1 != 0) {
        *(undefined *)(iVar1 + 0x25) = 0x10;
        *(char *)(iVar1 + 9) = param_2[1];
        *(undefined4 *)(iVar1 + 0x14) =
             **(undefined4 **)(&DAT_083339f8 + (uint)(byte)param_2[1] * 4);
      }
    }
    else {
      iVar1 = sub_08013308(*param_2,param_2[1]);
    }
    *piVar4 = iVar1;
    if (iVar1 != 0) {
      bVar2 = *(byte *)(iVar1 + 10);
      *(byte *)(iVar1 + 10) = bVar2 | 0x80;
      *(int **)(iVar1 + 0x18) = piVar4;
      *(char *)(iVar1 + 0x10) = param_2[2];
      *(char *)(iVar1 + 0x11) = param_2[3];
      *(undefined4 *)(iVar1 + 0x54) = *(undefined4 *)(param_2 + 4);
      *(undefined4 *)(iVar1 + 0x58) = *(undefined4 *)(param_2 + 8);
      if (param_2[0xc] == '\0') {
        bVar2 = bVar2 & 0xef | 0x80;
      }
      else {
        bVar2 = bVar2 | 0x90;
      }
      *(byte *)(iVar1 + 10) = bVar2;
      if (param_2[0xd] == '\0') {
        bVar2 = *(byte *)(iVar1 + 10) & 0xdf;
      }
      else {
        bVar2 = *(byte *)(iVar1 + 10) | 0x20;
      }
      *(byte *)(iVar1 + 10) = bVar2;
      (&DAT_0202ec58)[iVar3] = param_1;
      (&DAT_0202ec59)[iVar3] = 0;
      *(undefined2 *)(&DAT_0202ec5e + iVar3) = 0;
      *(undefined2 *)(&DAT_0202ec5c + iVar3) = 0;
      *(undefined2 *)(&DAT_0202ec5a + iVar3) = 0;
      if (uVar5 == 0) {
        DAT_0202e130 = iVar1;
        DAT_0202f648 = iVar1;
        sub_0801E708(iVar1,param_2[1],&DAT_02036c04);
        sub_08022FB8(iVar1);
        sub_0801E64C(iVar1,*(undefined *)(iVar1 + 0x1fc));
      }
      if ((uVar5 == 1) && (DAT_0202ebbb = DAT_0202ebbb & 0xfb, *(char *)(iVar1 + 8) == '\0')) {
        DAT_0202f64c = iVar1;
        sub_0801E708(iVar1,param_2[1],&DAT_02036db8);
        sub_08022FB8(iVar1);
        sub_0801E64C(iVar1,*(undefined *)(iVar1 + 0x1fc));
      }
    }
  }
  return in_lr;
}

