// sub_08032BDC at 0x08032BDC (thumb)

undefined4 sub_08032BDC(int param_1)

{
  char cVar1;
  undefined uVar2;
  int iVar3;
  undefined4 in_lr;
  int local_10;
  int local_c;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,0xf);
    *(undefined *)(param_1 + 0xe) = 0;
    sub_0800561C(param_1 + 0x74,&DAT_082ad4e8);
    sub_08001EAC(0x38);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      local_10 = *(int *)(param_1 + 0x4c);
      iVar3 = 0x100;
    }
    else {
      local_10 = *(int *)(param_1 + 0x4c);
      iVar3 = -0x100;
    }
    local_10 = local_10 + iVar3;
    local_c = *(int *)(param_1 + 0x50) + -0x4000;
    sub_0808827C(1,&local_10);
    sub_08064490(param_1,5);
    *(undefined *)(param_1 + 0x12) = 0x10;
  }
  sub_080297C0(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    if (*(short *)(param_1 + 0xcc) == 0) {
      uVar2 = 0x2f;
    }
    else {
      uVar2 = 0x1a;
    }
    *(undefined *)(param_1 + 0xd) = uVar2;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

