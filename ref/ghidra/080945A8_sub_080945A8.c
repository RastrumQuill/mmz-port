// sub_080945A8 at 0x080945A8 (thumb)

undefined4 sub_080945A8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  byte abStack_24 [4];
  
  sub_080C8D70(abStack_24,&DAT_080c9498,2);
  sub_08001FA8(param_1 + 0x2c,0x80947a9);
  *(int *)(param_1 + 0x34) = param_1;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xf7 | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  *(undefined *)(param_1 + 0x12) = 0x40;
  *(undefined4 *)(param_1 + 0x58) = 0;
  DAT_02004f38 = 0x6444;
  sub_08005214(&DAT_06002000);
  sub_08005214(&DAT_06000800 + (DAT_02004f38 & 0x1f00) * 4);
  iVar2 = 0;
  iVar5 = 4;
  iVar4 = 2;
  iVar3 = 0;
  do {
    iVar1 = iVar2 * 0x40;
    *(undefined2 *)(iVar1 + (DAT_02004f38 & 0x1f00) * 8 + 0x6000000) =
         *(undefined2 *)(&DAT_082b46a0 + iVar3 + (uint)*(byte *)(param_1 + 0x11) * 0x30);
    *(undefined2 *)(iVar1 + (DAT_02004f38 & 0x1f00) * 8 + 0x6000002) =
         *(undefined2 *)(&DAT_082b46a0 + iVar4 + (uint)*(byte *)(param_1 + 0x11) * 0x30);
    *(undefined2 *)(iVar1 + (DAT_02004f38 & 0x1f00) * 8 + 0x6000004) =
         *(undefined2 *)(&DAT_082b46a0 + (uint)*(byte *)(param_1 + 0x11) * 0x30 + iVar5);
    iVar5 = iVar5 + 6;
    iVar4 = iVar4 + 6;
    iVar3 = iVar3 + 6;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 8);
  DAT_02004f30 = DAT_02004f30 & 0xdbff;
  DAT_02004f44 = -(ushort)abStack_24[*(byte *)(param_1 + 0x11)];
  DAT_02004f46 = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 4);
  sub_0809470C(param_1);
  return in_lr;
}

