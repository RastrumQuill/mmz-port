// sub_080A2E50 at 0x080A2E50 (thumb)

undefined4 sub_080A2E50(int param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    iVar6 = *(int *)(param_1 + 0x28);
    if (*(byte *)(iVar6 + 0xc) < 2) {
      sub_080128D4(param_1);
      iVar5 = *(int *)(param_1 + 0xb4);
      iVar2 = sub_080EF150(*(int *)(iVar6 + 0x54) - iVar5,7);
      *(uint *)(param_1 + 0x54) = iVar5 + (uint)*(byte *)(param_1 + 0x11) * iVar2;
      iVar2 = *(int *)(param_1 + 0xb8);
      iVar6 = sub_080EF150(*(int *)(iVar6 + 0x58) - iVar2,7);
      *(uint *)(param_1 + 0x58) = iVar2 + (uint)*(byte *)(param_1 + 0x11) * iVar6;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 0xc);
    }
  }
  else {
    iVar6 = *(int *)(param_1 + 0x28);
    if (1 < *(byte *)(iVar6 + 0xc)) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 0xc);
    }
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar6 + 0x54);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar6 + 0x58);
    bVar1 = *(byte *)(iVar6 + 10) >> 4;
    uVar4 = bVar1 & 1;
    if ((bVar1 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(char *)(param_1 + 0x4c) = (char)uVar4;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
    pbVar3 = (byte *)(param_1 + 0xb4);
    if ((*pbVar3 != *(byte *)(iVar6 + 0xd0)) ||
       (*(byte *)(param_1 + 0xb5) != *(byte *)(iVar6 + 0xb5))) {
      *pbVar3 = *(byte *)(iVar6 + 0xd0);
      sub_08006E08(param_1 + 0x74,
                   &DAT_083447b0 + (*(byte *)(iVar6 + 0xb5) + 1) * (uint)*pbVar3 * 0x18);
    }
  }
  return in_lr;
}

