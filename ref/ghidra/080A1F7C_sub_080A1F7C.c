// sub_080A1F7C at 0x080A1F7C (thumb)

undefined4 sub_080A1F7C(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  undefined4 local_10;
  undefined4 local_c;
  
  sub_0809C980();
  iVar2 = *(int *)(param_1 + 0x58) + 0x40;
  *(int *)(param_1 + 0x58) = iVar2;
  iVar2 = *(int *)(param_1 + 0x50) + iVar2;
  *(int *)(param_1 + 0x50) = iVar2;
  cVar1 = sub_080079CC(*(undefined4 *)(param_1 + 0x4c),iVar2 + 0x2c00);
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1 + 0x58) = 0;
    local_10 = *(undefined4 *)(param_1 + 0x4c);
    local_c = sub_08008360(local_10,*(undefined4 *)(param_1 + 0x50));
    sub_0808D7E4(&local_10,0,0);
    sub_0808D7E4(&local_10,0,1);
    sub_0808D7E4(&local_10,1,0);
    sub_0808D7E4(&local_10,1,1);
    sub_08001EAC(10);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    (&DAT_02022ad4)[(int)*(uint *)(&DAT_082b5a4c + (uint)*(byte *)(param_1 + 0x10) * 4) >> 3] =
         (byte)(1 << (*(uint *)(&DAT_082b5a4c + (uint)*(byte *)(param_1 + 0x10) * 4) & 7)) |
         (&DAT_02022ad4)[(int)*(uint *)(&DAT_082b5a4c + (uint)*(byte *)(param_1 + 0x10) * 4) >> 3];
    sub_0801412C(1,param_1 + 0x4c);
  }
  return in_lr;
}

