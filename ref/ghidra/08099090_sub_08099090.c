// sub_08099090 at 0x08099090 (thumb)

undefined4 sub_08099090(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if ((DAT_02022ae0 & 0x10) == 0) {
    sub_08003458(param_1 + 0x6c);
    *(undefined *)(param_1 + 0x46) =
         *(undefined *)
          (*(char *)(param_1 + 0x71) * 4 +
          *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x40;
    cVar1 = sub_080079CC();
    if (cVar1 == '\0') {
      return in_lr;
    }
    sub_0808827C(3,param_1 + 0x4c);
    sub_08001EAC(2);
    *(undefined4 *)(param_1 + 0xc) = 2;
    uVar2 = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 8);
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 3;
    uVar2 = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 0xc);
  }
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  return in_lr;
}

