// sub_0808EEAC at 0x0808EEAC (thumb)

undefined8 sub_0808EEAC(int param_1)

{
  undefined uVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x200) == 0) {
    uVar2 = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    if (((*(char *)(param_1 + 0x10) == '\x02') || ((*(uint *)(param_1 + 0x8c) & 0x10000) == 0)) ||
       (*(byte *)(param_1 + 0xc0) < 10)) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
    *(undefined *)(param_1 + 0xd) = uVar1;
    sub_0808F224(param_1);
    uVar2 = 1;
  }
  return CONCAT44(in_lr,uVar2);
}

