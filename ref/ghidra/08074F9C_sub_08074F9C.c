// sub_08074F9C at 0x08074F9C (thumb)

undefined4 sub_08074F9C(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  if (*(byte *)(param_1 + 0x12) < 0xc) {
    iVar3 = sub_08013D9C(&DAT_02022c44,param_1 + 0x4c);
    if ((iVar3 == 0) && ((*(byte *)(param_1 + 0x12) & 3) == 0)) {
      sub_0808827C(3,param_1 + 0x4c);
    }
  }
  else {
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  }
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0xbc) + (DAT_0202164c - *(int *)(param_1 + 0xc0));
  cVar1 = *(char *)(param_1 + 0x12);
  if (cVar1 == '\f') {
    uVar4 = 5;
  }
  else if (cVar1 == '\x11') {
    uVar4 = 0;
  }
  else {
    if (cVar1 != '\x16') goto LAB_0807507c;
    uVar4 = 1;
  }
  sub_080033F0(param_1 + 0x6c,uVar4);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
LAB_0807507c:
  if (0x3d < *(byte *)(param_1 + 0x12)) {
    if ((*(byte *)(param_1 + 0x12) & 3) < 2) {
      *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | 0xd0;
      *(undefined *)(param_1 + 0x1e) = 0xd;
    }
    else {
      cVar1 = (&DAT_02022f30)[*(byte *)(param_1 + 9)];
      *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | cVar1 << 4;
      *(char *)(param_1 + 0x1e) = cVar1;
    }
  }
  bVar2 = *(char *)(param_1 + 0x12) + 1;
  *(byte *)(param_1 + 0x12) = bVar2;
  if (0x5d < bVar2) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_08074B24(param_1);
  }
  return in_lr;
}

