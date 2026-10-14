// sub_0808B7C0 at 0x0808B7C0 (thumb)

undefined4 sub_0808B7C0(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  undefined4 in_lr;
  int local_24;
  int local_20;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      sub_08017700(param_1,0x6501);
      sub_0800471C(0x41);
      piVar4 = &DAT_0836568c;
      iVar5 = 5;
      do {
        uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
        DAT_0202f608 = uVar3 & 0x7fffffff;
        uVar3 = uVar3 * 2 >> 0x11 & 3;
        local_24 = *(int *)(param_1 + 0x54) + *piVar4;
        local_20 = *(int *)(param_1 + 0x58) + piVar4[1] + 0x4000;
        sub_080C1760(&local_24,uVar3,0x650e);
        sub_080C1760(&local_24,uVar3,0x650f);
        sub_080C1760(&local_24,uVar3,0x6510);
        piVar4 = piVar4 + 2;
        iVar5 = iVar5 + -1;
      } while (-1 < iVar5);
      *(undefined *)(param_1 + 0xd) = 2;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_08017700(param_1,0x6500);
    *(int *)(param_1 + 0x58) = *(int *)(*(int *)(param_1 + 0x28) + 0x58) + -0x4000;
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x54);
    *(undefined *)(param_1 + 0x12) = 0x3c;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080177F4(param_1);
  if ((*(char *)(param_1 + 0x12) == '\0') ||
     (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 == '\0')) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

