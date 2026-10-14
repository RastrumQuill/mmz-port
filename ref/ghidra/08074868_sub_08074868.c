// sub_08074868 at 0x08074868 (thumb)

undefined4 sub_08074868(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x20);
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
    sub_080489E4(param_1);
    sub_080033F0(param_1 + 0x6c,0xb);
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf3 | 4;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_080055FC(param_1 + 0x74,&DAT_082b1654,param_1 + 0x4c,0);
    *(int *)(param_1 + 0xb4) = param_1;
    *(undefined4 *)(param_1 + 0xb0) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') goto LAB_080749a2;
  pbVar5 = (byte *)(iVar2 + 0x70);
  if (((*(byte *)(param_1 + 10) & 1) == 0) || (*pbVar5 == 0)) {
    if (*pbVar5 < 2) goto LAB_08074916;
  }
  else if (*pbVar5 == 1) {
LAB_08074916:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  }
  else {
    sub_080033F0(param_1 + 0x6c,0);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  }
  iVar3 = param_1 + 0x6c;
  pbVar4 = (byte *)(param_1 + 0x70);
  if ((*pbVar5 == 0) && (*pbVar4 != 0xb)) {
    sub_080033F0(iVar3,0xb);
  }
  if ((*pbVar5 == 1) && (*pbVar4 != 0xc)) {
    sub_080033F0(iVar3,0xc);
  }
  sub_08003458(iVar3);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 + *(int *)((uint)*pbVar4 * 4 + *(int *)(param_1 + 0x6c)));
  bVar1 = *(byte *)(iVar2 + 10) >> 4;
  *(byte *)(param_1 + 0x44) = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar2 + 0x4c);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar2 + 0x50);
LAB_080749a2:
  if (((*(ushort *)(undefined4 *)(param_1 + 0x90) & 4) == 0) || ((*(byte *)(param_1 + 10) & 1) == 0)
     ) {
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  else if (*(int *)(param_1 + 0x5c) == 0) {
    DAT_02022adb = DAT_02022adb | 1;
    *(undefined4 *)(param_1 + 0x5c) = 1;
  }
  if (1 < *(byte *)(iVar2 + 0xc)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}

