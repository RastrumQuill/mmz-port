// sub_0806551C at 0x0806551C (thumb)

undefined4 sub_0806551C(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  uVar1 = DAT_02022890 * 0x343fd + 0x269ec3;
  DAT_02022890 = uVar1 & 0x7fffffff;
  sub_080033F0(param_1 + 0x6c,(uVar1 * 2 >> 0x11 & 3) + 6);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  iVar2 = *(int *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar2 + 0x4c);
  if (*(char *)(param_1 + 0x11) == '\x02') {
    iVar2 = *(int *)(iVar2 + 0x50) + 0x1000;
  }
  else {
    iVar2 = *(int *)(iVar2 + 0x50) + 0x2000;
  }
  *(int *)(param_1 + 0x50) = iVar2;
  if (1 < *(byte *)(*(int *)(param_1 + 0x20) + 0xc)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  }
  return in_lr;
}

