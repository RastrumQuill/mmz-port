// sub_0806B9FC at 0x0806B9FC (thumb)

undefined4 sub_0806B9FC(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(char *)(param_1 + 0xbd) == '\0') {
      sub_080127E4(param_1,0x80a);
    }
    else {
      sub_080127E4(param_1,0x802);
    }
    sub_08006E08(param_1 + 0x74,&DAT_0833e3e8);
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (*(char *)(param_1 + 0x73) == '\x04') {
      uVar1 = sub_08098E80(param_1,*(undefined *)(param_1 + 0xbe));
      *(undefined4 *)(param_1 + 0x28) = uVar1;
      *(undefined *)(param_1 + 0xc2) = 0;
      *(undefined *)(param_1 + 0x12) = 0x30;
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
  }
  else if (1 < *(byte *)(*(int *)(param_1 + 0x28) + 0xc)) {
    *(undefined *)(param_1 + 0xd) = 8;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

