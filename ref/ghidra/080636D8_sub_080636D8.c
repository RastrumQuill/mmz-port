// sub_080636D8 at 0x080636D8 (thumb)

undefined4 sub_080636D8(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_080033F0(param_1 + 0x6c,0);
    *(undefined *)(param_1 + 0xe) = 0;
    sub_0800561C(param_1 + 0x74,&DAT_082b072c);
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  if ((*(ushort *)(param_1 + 0x90) & 4) != 0) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 1;
    sub_0800561C(param_1 + 0x74,&DAT_082b0710);
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(DAT_0202286c + 0x4c);
  }
  return in_lr;
}

