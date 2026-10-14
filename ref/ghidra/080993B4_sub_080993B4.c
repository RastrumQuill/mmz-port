// sub_080993B4 at 0x080993B4 (thumb)

undefined4 sub_080993B4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x20);
  if (*(byte *)(iVar2 + 0xc) < 2) {
    if (*(char *)(param_1 + 0x10) == '\0') {
      *(int *)(param_1 + 0x4c) =
           *(int *)(param_1 + 0x4c) * 7 + *(int *)(iVar2 + 0x4c) +
           (&DAT_082b4fa8)[(uint)**(byte **)(param_1 + 0x24) * 2] >> 3;
    }
    else {
      *(int *)(param_1 + 0x4c) =
           *(int *)(param_1 + 0x4c) * 7 + *(int *)(iVar2 + 0x4c) +
           (&DAT_082b4fa4)[(uint)**(byte **)(param_1 + 0x24) * 2] >> 3;
    }
    uVar1 = sub_08008360(*(undefined4 *)(iVar2 + 0x4c),*(undefined4 *)(iVar2 + 0x50));
    *(undefined4 *)(param_1 + 0x50) = uVar1;
    sub_08003458(param_1 + 0x6c);
    *(undefined *)(param_1 + 0x46) =
         *(undefined *)
          (*(char *)(param_1 + 0x71) * 4 +
          *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 8);
    sub_08099464(param_1);
  }
  return in_lr;
}

