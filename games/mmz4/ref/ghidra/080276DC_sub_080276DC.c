// sub_080276DC at 0x080276DC (thumb)

undefined4 sub_080276DC(byte param_1,char *param_2)

{
  undefined uVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  undefined4 in_lr;
  
  uVar6 = (uint)param_1;
  iVar4 = uVar6 * 0x10;
  piVar5 = (int *)(&DAT_0202e930 + iVar4);
  if (*piVar5 == 0) {
    if ((*param_2 == '\0') && (param_2[2] != '\0')) {
      iVar2 = sub_0802B4B4();
      if (iVar2 != 0) {
        *(undefined *)(iVar2 + 0x25) = 0x10;
        *(char *)(iVar2 + 9) = param_2[1];
        *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(&DAT_0884f904)[(byte)param_2[1]];
      }
    }
    else {
      iVar2 = sub_0801DD7C(*param_2,param_2[1]);
    }
    *piVar5 = iVar2;
    if (iVar2 != 0) {
      bVar3 = *(byte *)(iVar2 + 10);
      *(byte *)(iVar2 + 10) = bVar3 | 0x80;
      *(int **)(iVar2 + 0x18) = piVar5;
      *(char *)(iVar2 + 0x10) = param_2[2];
      *(char *)(iVar2 + 0x11) = param_2[3];
      *(undefined4 *)(iVar2 + 0x54) = *(undefined4 *)(param_2 + 4);
      *(undefined4 *)(iVar2 + 0x58) = *(undefined4 *)(param_2 + 8);
      if (param_2[0xc] == '\0') {
        bVar3 = bVar3 & 0xef | 0x80;
      }
      else {
        bVar3 = bVar3 | 0x90;
      }
      *(byte *)(iVar2 + 10) = bVar3;
      if (param_2[0xd] == '\0') {
        bVar3 = *(byte *)(iVar2 + 10) & 0xdf;
      }
      else {
        bVar3 = *(byte *)(iVar2 + 10) | 0x20;
      }
      *(byte *)(iVar2 + 10) = bVar3;
      (&DAT_0202e938)[iVar4] = param_1;
      (&DAT_0202e939)[iVar4] = 0;
      *(undefined2 *)(&DAT_0202e93e + iVar4) = 0;
      *(undefined2 *)(&DAT_0202e93c + iVar4) = 0;
      *(undefined2 *)(&DAT_0202e93a + iVar4) = 0;
      if (uVar6 == 0) {
        DAT_0202dbf0 = iVar2;
        DAT_0202f368 = iVar2;
        sub_080382BC(iVar2,&DAT_02035958,0);
        uVar1 = sub_08038928(iVar2);
        sub_0802B524(iVar2,uVar1);
      }
      if (uVar6 == 1) {
        if ((DAT_02000c80 & 0x7f) == 4) {
          iVar4 = FUN_081288bc(*(int *)(DAT_0202dbf0 + 0x54) + -0xf000,0x3c000);
          *(int *)(iVar2 + 0x54) = iVar4 * 0x3c000 + *(int *)(iVar2 + 0x54);
        }
        DAT_0202e8b8 = DAT_0202e8b8 & 0x7f;
      }
    }
  }
  return in_lr;
}

