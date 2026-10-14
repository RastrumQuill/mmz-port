// sub_0809A6A8 at 0x0809A6A8 (thumb)

undefined4 sub_0809A6A8(int param_1)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 in_lr;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if (*(char *)(iVar2 + 0x34) == '\0') {
    *(int *)(iVar2 + 0x20) = *(int *)(iVar2 + 0x20) + 0x3c;
    pbVar3 = (byte *)(iVar2 + 0x35);
    *pbVar3 = *pbVar3 + 1;
    *(int *)(iVar2 + 0x1c) = *(int *)(iVar2 + 0x1c) + 1;
    *(char *)(iVar2 + 0x32) = *(char *)(iVar2 + 0x32) + '\x01';
    sub_080999D4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),
                 *(undefined4 *)(iVar2 + 0x1c),1);
    iVar1 = *(int *)(iVar2 + 0x1c) + 1;
    if (4 < iVar1) {
      iVar1 = 4;
    }
    *(uint *)(iVar2 + 0x24) = *(int *)(iVar2 + 0x24) + (uint)*pbVar3 * iVar1;
  }
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  local_18 = *(undefined4 *)(param_1 + 0x54);
  local_14 = *(undefined4 *)(param_1 + 0x58);
  sub_080B2484(1,&local_18);
  sub_0800471C(0x31);
  sub_080B7CF8(param_1,&local_18,&DAT_08366f46,3,1);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

