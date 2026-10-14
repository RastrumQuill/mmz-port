// sub_0806A420 at 0x0806A420 (thumb)

undefined4 sub_0806A420(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x200) == 0) {
    sub_080EF118(param_1,*(undefined4 *)(&DAT_0833e27c + (uint)*(byte *)(param_1 + 0x10) * 4));
    return in_lr;
  }
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  uVar2 = *(uint *)(param_1 + 0x8c);
  uVar1 = uVar2 & 0x10000;
  if (uVar1 != 0) {
    if ((uVar2 & 0x8000) != 0) {
      *(undefined *)(param_1 + 0xd) = 2;
      goto LAB_0806a468;
    }
    uVar1 = 1;
  }
  *(char *)(param_1 + 0xd) = (char)uVar1;
LAB_0806a468:
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  sub_0806A6A8(param_1);
  return in_lr;
}

