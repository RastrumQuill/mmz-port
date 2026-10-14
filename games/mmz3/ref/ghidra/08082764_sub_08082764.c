// sub_08082764 at 0x08082764 (thumb)

undefined4 sub_08082764(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801749C(param_1);
    sub_08017700(param_1,0x5901);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') goto LAB_0808278e;
  sub_080177F4(param_1);
LAB_0808278e:
  if (1 < *(byte *)(*(int *)(param_1 + 0xbc) + 0xc)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  }
  return in_lr;
}

