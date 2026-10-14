// sub_0808E1C8 at 0x0808E1C8 (thumb)

undefined4 sub_0808E1C8(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x200) == 0) {
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08365b08 + (uint)*(byte *)(param_1 + 0xd) * 4));
    sub_0808ED44(param_1);
    iVar2 = sub_08063614(param_1);
    if ((((iVar2 != 0) && (cVar1 = *(char *)(param_1 + 0xd), cVar1 != '\x02')) && (cVar1 != '\x03'))
       && ((cVar1 != '\x05' && (cVar1 != '\x04')))) {
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    piVar3 = (int *)(param_1 + 0xbc);
    if ((*piVar3 == 0) && (iVar2 = sub_08063614(param_1), iVar2 != 0)) {
      *(undefined *)(param_1 + 0xba) = *(undefined *)(param_1 + 0xd);
    }
    else {
      iVar2 = sub_08063614(param_1);
      if (iVar2 != 0) {
        *(undefined *)(param_1 + 0xd) = 0;
        *(undefined *)(param_1 + 0xe) = 0;
      }
      if (*piVar3 == 0) {
        sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08365b20 + (uint)*(byte *)(param_1 + 0xd) * 4));
      }
      else {
        iVar2 = sub_08025794();
        if (iVar2 == 0) {
          sub_08007390(param_1 + 0x74,&DAT_08365b68);
        }
        else {
          sub_08007390(param_1 + 0x74,&DAT_08365b50);
          *piVar3 = 0;
          *(undefined *)(param_1 + 0xd) = 0;
          *(undefined *)(param_1 + 0xe) = 0;
        }
      }
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_0808E2B8(param_1);
  }
  return in_lr;
}

