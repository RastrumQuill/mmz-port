// sub_0809A75C at 0x0809A75C (thumb)

undefined4 sub_0809A75C(int param_1)

{
  int iVar1;
  byte *pbVar2;
  undefined4 in_lr;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (*(char *)(iVar1 + 0x34) == '\0') {
    *(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + 300;
    pbVar2 = (byte *)(iVar1 + 0x35);
    *pbVar2 = *pbVar2 + 1;
    *(int *)(iVar1 + 0x1c) = *(int *)(iVar1 + 0x1c) + 1;
    *(char *)(iVar1 + 0x32) = *(char *)(iVar1 + 0x32) + '\x01';
    sub_080999D4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),
                 *(undefined4 *)(iVar1 + 0x1c),5);
    *(uint *)(iVar1 + 0x24) = *(int *)(iVar1 + 0x24) + (uint)*pbVar2 * 5;
  }
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  local_18 = *(undefined4 *)(param_1 + 0x54);
  local_14 = *(undefined4 *)(param_1 + 0x58);
  sub_080B2484(1,&local_18);
  sub_0800471C(0x31);
  sub_080B7CF8(param_1,&local_18,&DAT_08366f4c,3,1);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

