// sub_0808CEB8 at 0x0808CEB8 (thumb)

undefined8 sub_0808CEB8(int param_1)

{
  undefined uVar1;
  undefined4 uVar2;
  uint *puVar3;
  undefined4 in_lr;
  
  puVar3 = (uint *)(param_1 + 0x8c);
  if ((*puVar3 & 0x200) == 0) {
    uVar2 = 0;
    goto LAB_0808cf2a;
  }
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  if (*(char *)(param_1 + 0x10) == '\t') {
    uVar1 = 0;
LAB_0808cf1c:
    *(undefined *)(param_1 + 0xd) = uVar1;
  }
  else {
    if ((*puVar3 & 0x10000) == 0) {
      *(undefined *)(param_1 + 0xbb) = 0;
      if ((*puVar3 & 0x20000) == 0) {
        uVar1 = 1;
      }
      else {
        uVar1 = 3;
      }
      goto LAB_0808cf1c;
    }
    *(undefined *)(param_1 + 0xbb) = 1;
    *(undefined *)(param_1 + 0xd) = 2;
  }
  sub_0808D29C(param_1);
  uVar2 = 1;
LAB_0808cf2a:
  return CONCAT44(in_lr,uVar2);
}

