// sub_0806EB58 at 0x0806EB58 (thumb)

undefined4 sub_0806EB58(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x200) == 0) {
    iVar1 = sub_08065A24(param_1);
    if (iVar1 == 0) {
      sub_0806EC84(param_1);
      sub_0806EC88(param_1);
      sub_0806ECC8(param_1);
      sub_080EF118(param_1,*(undefined4 *)(&DAT_0833ea48 + (uint)*(byte *)(param_1 + 0xd) * 4));
    }
    else {
      sub_08006E08(param_1 + 0x74,&DAT_0833ea74);
      *(undefined4 *)(param_1 + 0xc0) = 0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_0806EBD4(param_1);
  }
  return in_lr;
}

