// sub_0807AF98 at 0x0807AF98 (thumb)

undefined4 sub_0807AF98(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  byte abStack_10c [24];
  undefined auStack_f4 [76];
  undefined4 local_a8;
  undefined4 local_a4;
  
  iVar2 = *(int *)(param_1 + 0x20);
  sub_080C8D70(abStack_10c,&DAT_080c935a,0x18);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  if (*(char *)(param_1 + 0xd) == '\0') {
    cVar1 = *(char *)(param_1 + 0x12);
    *(char *)(param_1 + 0x12) = cVar1 + -1;
    if (cVar1 == '\0') {
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined4 *)(param_1 + 0x58) = 0x300;
      *(undefined *)(param_1 + 0x45) = 1;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x20;
      if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
        *(uint *)(param_1 + 0x4c) =
             *(int *)(param_1 + 0x4c) +
             (uint)abStack_10c
                   [((*(byte *)(param_1 + 0x11) & 0xf) >> 1) +
                    (*(byte *)(param_1 + 0x11) >> 4 & 3) * 6] * -0x100;
      }
      else {
        *(uint *)(param_1 + 0x4c) =
             *(int *)(param_1 + 0x4c) +
             (uint)abStack_10c
                   [((*(byte *)(param_1 + 0x11) & 0xf) >> 1) +
                    (*(byte *)(param_1 + 0x11) >> 4 & 3) * 6] * 0x100;
      }
    }
  }
  else {
    cVar1 = sub_080079CC(*(undefined4 *)(param_1 + 0x4c));
    if ((cVar1 != '\0') &&
       (cVar1 = sub_080079CC(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50)),
       cVar1 != 'A')) {
      local_a8 = *(undefined4 *)(param_1 + 0x4c);
      local_a4 = *(undefined4 *)(param_1 + 0x50);
      sub_0807A5F8(auStack_f4,9,0);
      goto LAB_0807b0a6;
    }
  }
  if (*(byte *)(iVar2 + 0xc) < 2) {
    return in_lr;
  }
  sub_0808827C(1,param_1 + 0x4c);
LAB_0807b0a6:
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 8);
  return in_lr;
}

