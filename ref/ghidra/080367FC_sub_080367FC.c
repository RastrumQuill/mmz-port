// sub_080367FC at 0x080367FC (thumb)

undefined4 sub_080367FC(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  undefined4 local_10;
  undefined4 local_c;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) | 0xc;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    local_10 = 0;
    local_c = 0xffffe800;
    uVar2 = sub_08099F90(param_1,&local_10);
    *(undefined4 *)(param_1 + 0x24) = uVar2;
  }
  sub_080297C0(param_1);
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (*(byte *)(*(int *)(param_1 + 0x24) + 0xc) < 2) {
      return in_lr;
    }
    DAT_02022b6e = DAT_02022b6e | 2;
    *(undefined *)(param_1 + 0x12) = 0x20;
  }
  else {
    if (*(char *)(param_1 + 0xf) != '\x01') {
      return in_lr;
    }
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) {
      return in_lr;
    }
    if (*(char *)(param_1 + 0x10) == '\0') {
      sub_08015698(0x13,param_1 + 0x4c);
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  return in_lr;
}

