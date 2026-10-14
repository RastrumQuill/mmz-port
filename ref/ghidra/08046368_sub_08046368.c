// sub_08046368 at 0x08046368 (thumb)

undefined4 sub_08046368(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x24);
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,7);
    *(undefined *)(param_1 + 0xe) = 0;
    *(bool *)(param_1 + 0xf) = *(int *)(param_1 + 0x4c) < *(int *)(DAT_0202286c + 0x4c);
    *(bool *)(param_1 + 0xf) =
         *(int *)(*(int *)(param_1 + 0xc4) + 0x50) +
         *(int *)(*(int *)(param_1 + 0xc4) + 0x58) * 0x20 <
         *(int *)(*(int *)(param_1 + 0xc0) + 0x50) +
         *(int *)(*(int *)(param_1 + 0xc0) + 0x58) * 0x20;
    *(undefined *)(param_1 + 0x12) = 0x20;
    *(undefined *)(iVar2 + 0x11) = 1;
    sub_0808678C(param_1,2,0,0);
    sub_08087038(param_1,*(undefined *)(param_1 + 0xf));
  }
  sub_080297C0(param_1);
  *(char *)(param_1 + 0xde) = *(char *)(param_1 + 0xde) + '\x01';
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(undefined *)(param_1 + 0xd) = 0x14;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

