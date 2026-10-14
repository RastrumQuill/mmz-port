// sub_0804A788 at 0x0804A788 (thumb)

undefined4 sub_0804A788(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  if (*(char *)(param_1 + 0x73) == '\x03') {
    iVar1 = param_1 + 0x4c;
    sub_0808887C(param_1,iVar1,*(undefined *)(param_1 + 0xc4),2);
    sub_0808887C(param_1,iVar1,*(undefined *)(param_1 + 0xc4),0);
    sub_08015698(4,iVar1);
    if (DAT_02022b2c < 9999) {
      DAT_02022b2c = DAT_02022b2c + 1;
    }
    sub_08015794(param_1,iVar1);
    *(undefined *)(param_1 + 0xd) = 4;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  }
  return in_lr;
}

