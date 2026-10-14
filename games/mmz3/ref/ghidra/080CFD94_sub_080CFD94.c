// sub_080CFD94 at 0x080CFD94 (thumb)

undefined4 sub_080CFD94(int param_1)

{
  undefined4 in_lr;
  
  sub_0801749C();
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x800;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x800;
  sub_0800393C(&DAT_085d8280,(DAT_0202fb04 - 0x1e0) * 0x20 + 0x10000);
  sub_08003E14(&DAT_085d828c,(DAT_0202f904 - 10) * 0x20 + 0x200);
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 4;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 0;
  sub_080CFE3C(param_1);
  return in_lr;
}

