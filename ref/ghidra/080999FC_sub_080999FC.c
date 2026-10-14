// sub_080999FC at 0x080999FC (thumb)

undefined4 sub_080999FC(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b500c + (uint)*(byte *)(param_1 + 0xd) * 4));
  sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b501c + (uint)*(byte *)(param_1 + 0x10) * 4));
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  uVar1 = sub_08013D9C(&DAT_02022c44,param_1 + 0x4c);
  if (uVar1 < 0x2000) {
    sub_08003458(param_1 + 0x6c);
    *(undefined *)(param_1 + 0x46) =
         *(undefined *)
          (*(char *)(param_1 + 0x71) * 4 +
          *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 8);
    sub_08099BD8(param_1);
  }
  return in_lr;
}

