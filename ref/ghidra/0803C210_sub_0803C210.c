// sub_0803C210 at 0x0803C210 (thumb)

undefined4 sub_0803C210(int param_1)

{
  undefined4 in_lr;
  
  sub_08029654();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_08029778(param_1,2);
  sub_080297C0(param_1);
  *(undefined *)(param_1 + 0x44) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0xd8) = 0x60;
  sub_08029874(param_1,&DAT_082ade04,*(undefined *)(param_1 + 0xd8));
  *(undefined *)(param_1 + 0x44) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0xcd) = 0;
  *(undefined *)(param_1 + 0xd2) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  sub_080014E8(&DAT_084e0208,(DAT_02022fb4 - 0x210) * 0x20 + 0x10000);
  sub_0800179C(&DAT_084e0214,(DAT_02022ffa - 6) * 0x20 + 0x200);
  sub_080014E8(&DAT_084e021c,(DAT_02022fb6 - 0x290) * 0x20 + 0x10000);
  sub_0800179C(&DAT_084e0228,(DAT_02022ffb - 7) * 0x20 + 0x200);
  *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0x4c) + -0xf800;
  *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0x50) + -0xa800;
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082acbf8 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 1;
  sub_0803C354(param_1);
  return in_lr;
}

