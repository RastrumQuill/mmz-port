// sub_08067504 at 0x08067504 (thumb)

undefined4 sub_08067504(int param_1)

{
  undefined uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  uVar2 = DAT_02022890 * 0x343fd + 0x269ec3;
  DAT_02022890 = uVar2 & 0x7fffffff;
  if ((uVar2 * 2 >> 0x11 & 0xf) < 10) {
    uVar1 = 2;
  }
  else {
    uVar1 = 3;
  }
  *(undefined *)(param_1 + 0xd) = uVar1;
  *(undefined *)(param_1 + 0xe) = 1;
  return in_lr;
}

