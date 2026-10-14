// sub_0809157C at 0x0809157C (thumb)

undefined4 sub_0809157C(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar3 = *(int *)(param_1 + 0x20);
  sub_0800DEB4(param_1,iVar3);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_080033F0(param_1 + 0x6c,(&DAT_082b39c4)[*(byte *)(param_1 + 0x11)]);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  uVar2 = DAT_02022890 * 0x343fd + 0x269ec3;
  DAT_02022890 = uVar2 & 0x7fffffff;
  *(uint *)(param_1 + 0x4c) = *(int *)(iVar3 + 0x4c) + (uVar2 * 4 >> 0x12) + -0x2000;
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar3 + 0x50);
  bVar1 = *(byte *)(iVar3 + 10) >> 4;
  *(byte *)(param_1 + 0x44) = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) | 0xc;
  *(undefined *)(param_1 + 0x12) = 0x28;
  local_20 = *(undefined4 *)(param_1 + 0x4c);
  local_1c = sub_08008360(local_20,*(undefined4 *)(param_1 + 0x50));
  sub_0808827C(3,&local_20);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 4);
  sub_0809154C(param_1);
  return in_lr;
}

