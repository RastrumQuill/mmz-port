// sub_080826E4 at 0x080826E4 (thumb)

undefined4 sub_080826E4(int param_1)

{
  undefined uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar1 = *(undefined *)(param_1 + 0x24);
    sub_08017528(param_1);
    sub_08017700(param_1,0x5900);
    *(undefined *)(param_1 + 0x24) = uVar1;
    if (*(char *)(param_1 + 0xb5) == '\0') {
      sub_080177F4(param_1);
    }
    sub_08007390(param_1 + 0x74,&DAT_08364920);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') goto LAB_0808273c;
  if (*(char *)(param_1 + 0xb5) != '\0') {
    sub_080177F4(param_1);
  }
LAB_0808273c:
  if (1 < *(byte *)(*(int *)(param_1 + 0x28) + 0xc)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  }
  return in_lr;
}

