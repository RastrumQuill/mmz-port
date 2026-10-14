// sub_0808AFE8 at 0x0808AFE8 (thumb)

undefined4 sub_0808AFE8(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  if (*(byte *)(iVar4 + 0xc) < 3) {
    if ((DAT_02030108 & 0x40) == 0) {
      bVar2 = *(byte *)(param_1 + 0xe);
      if (bVar2 != 1) {
        if (1 < bVar2) {
          if (bVar2 != 2) {
            return in_lr;
          }
          uVar3 = *(undefined4 *)(iVar4 + 0x58);
          *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar4 + 0x54);
          *(undefined4 *)(param_1 + 0x58) = uVar3;
          bVar2 = *(char *)(param_1 + 0x12) + 1;
          *(byte *)(param_1 + 0x12) = bVar2;
          if ((bVar2 & 1) == 0) {
            bVar2 = *(byte *)(param_1 + 10) & 0xfe;
          }
          else {
            bVar2 = *(byte *)(param_1 + 10) | 1;
          }
          *(byte *)(param_1 + 10) = bVar2;
          *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
          sub_080177F4(param_1);
          return in_lr;
        }
        if (bVar2 != 0) {
          return in_lr;
        }
        *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 0x10;
        *(undefined *)(param_1 + 0x1d) = *(undefined *)(iVar4 + 0x1c);
        sub_08017700(param_1,0x6e06);
        sub_08007390(param_1 + 0x74,&DAT_0836541c);
        *(undefined *)(param_1 + 0x12) = 0;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      if (1 < *(byte *)(*(int *)(param_1 + 0x28) + 0xc)) {
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      iVar4 = sub_08063614(param_1);
      if (iVar4 != 0) {
        return in_lr;
      }
      uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x58);
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x54);
      *(undefined4 *)(param_1 + 0x58) = uVar3;
      sub_080177F4(param_1);
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    bVar2 = *(byte *)(param_1 + 10);
    bVar1 = 0xfb;
  }
  else {
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    bVar1 = *(byte *)(param_1 + 10) & 0xfb;
    bVar2 = 0xfe;
  }
  *(byte *)(param_1 + 10) = bVar1 & bVar2;
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  *(undefined *)(param_1 + 0x11) = 1;
  sub_0808A800(param_1);
  return in_lr;
}

