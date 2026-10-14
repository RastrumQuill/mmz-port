// sub_0808497C at 0x0808497C (thumb)

/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined4 sub_0808497C(int param_1)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sVar1 = sub_08008354(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if (sVar1 == -0x8000) {
      uVar5 = *(undefined4 *)(param_1 + 0x58);
      uVar2 = DAT_0202e188 * 0x343fd + 0x269ec3;
      DAT_0202e188 = uVar2 & 0x7fffffff;
      for (uVar2 = (uVar2 * 2 >> 0x11 & 3) + 2; uVar2 != 0; uVar2 = uVar2 - 1 & 0xff) {
        uVar3 = DAT_0202e188 * 0x343fd + 0x269ec3;
        DAT_0202e188 = uVar3 & 0x7fffffff;
        sub_080AC8A4(*(int *)(param_1 + 0x54) + ((uVar3 * 2 >> 0x11 & 7) - 3) * 0x100,uVar5,0);
      }
    }
    sub_080127E4(param_1,0x7200);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined *)(param_1 + 0xb9) = 1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar4 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar4;
  if (0x700 < iVar4) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  sVar1 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if (sVar1 != 0) {
    uVar5 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar5;
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

