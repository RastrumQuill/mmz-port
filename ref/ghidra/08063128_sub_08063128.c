// sub_08063128 at 0x08063128 (thumb)

undefined4 sub_08063128(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_080033F0(param_1 + 0x6c,7);
    *(undefined *)(param_1 + 0xe) = 0;
    if (*(char *)(param_1 + 0xc6) == '\0') {
      uVar3 = 0x100;
    }
    else {
      uVar3 = 0xffffff00;
    }
    *(undefined4 *)(param_1 + 0x54) = uVar3;
    sub_08091AEC(param_1,0,*(char *)(param_1 + 0xc6));
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  bVar1 = *(byte *)(param_1 + 0x12);
  *(byte *)(param_1 + 0x12) = bVar1 + 1;
  if ((bVar1 & 3) < 2) {
    bVar1 = *(byte *)(param_1 + 10) | 1;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) & 0xfe;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  iVar4 = *(int *)(param_1 + 0x58) + 0x40;
  *(int *)(param_1 + 0x58) = iVar4;
  if (0x700 < iVar4) {
    *(undefined4 *)(param_1 + 0x58) = 0x700;
  }
  cVar2 = sub_080079CC(*(undefined4 *)(param_1 + 0x4c),*(int *)(param_1 + 0x50) + 0x1000);
  if (cVar2 != '\0') {
    iVar4 = param_1 + 0x4c;
    sub_0808827C(1,iVar4);
    sub_08001EAC(2);
    sub_08091AEC(param_1,1,0);
    sub_08091AEC(param_1,1,0);
    sub_08015698(1,iVar4);
    if (DAT_02022b2c < 9999) {
      DAT_02022b2c = DAT_02022b2c + 1;
    }
    sub_08015794(param_1,iVar4);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  }
  return in_lr;
}

