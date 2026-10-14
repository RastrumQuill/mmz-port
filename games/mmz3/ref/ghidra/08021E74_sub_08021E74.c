// sub_08021E74 at 0x08021E74 (thumb)

undefined4 sub_08021E74(byte param_1,char *param_2)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined4 in_lr;
  
  uVar5 = (uint)param_1;
  iVar3 = uVar5 * 0x10;
  piVar4 = &DAT_020301c0 + uVar5 * 4;
  if (*piVar4 == 0) {
    if ((*param_2 == '\0') && (param_2[2] != '\0')) {
      iVar1 = sub_08025880();
      if (iVar1 != 0) {
        *(undefined *)(iVar1 + 0x25) = 0x10;
        *(char *)(iVar1 + 9) = param_2[1];
        *(undefined4 *)(iVar1 + 0x14) =
             **(undefined4 **)(&DAT_0835ab9c + (uint)(byte)param_2[1] * 4);
      }
    }
    else {
      iVar1 = sub_0801850C(*param_2,param_2[1]);
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
      (&DAT_020301c8)[iVar3] = param_1;
      (&DAT_020301c9)[iVar3] = 0;
      *(undefined2 *)(&DAT_020301ce + iVar3) = 0;
      *(undefined2 *)(&DAT_020301cc + iVar3) = 0;
      *(undefined2 *)(&DAT_020301ca + iVar3) = 0;
      if (uVar5 == 0) {
        DAT_0202f5c0 = iVar1;
        DAT_02030bf8 = iVar1;
        sub_080324A8(iVar1,&DAT_02037300,0);
        sub_080258F0(iVar1,*(undefined *)(iVar1 + 0xc4));
      }
      if (uVar5 == 1) {
        DAT_02030108 = DAT_02030108 & 0xf7;
      }
    }
  }
  return in_lr;
}

