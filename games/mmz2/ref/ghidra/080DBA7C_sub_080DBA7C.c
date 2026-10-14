// sub_080DBA7C at 0x080DBA7C (thumb)

undefined4 sub_080DBA7C(int param_1)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  undefined4 in_lr;
  
  pbVar3 = *(byte **)(param_1 + 0x28);
  if (*pbVar3 < 2) {
    bVar1 = *(byte *)(param_1 + 0x12);
    cVar2 = sub_080D58D0(*(undefined *)(*(int *)(pbVar3 + 0x10) + 0x20a + (uint)bVar1));
    if (cVar2 < 0) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
      *(uint *)(param_1 + 0x54) = (uint)bVar1 * 0x1000 + 0x7c00 + *(int *)(pbVar3 + 8);
      sub_080127E4(param_1,*(undefined2 *)(&DAT_0834bcac + cVar2 * 2));
      sub_080128D4(param_1);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0834b8b4)[*(byte *)(param_1 + 9)] + 8);
    sub_080DBB50(param_1);
  }
  return in_lr;
}

