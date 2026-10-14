// sub_08096578 at 0x08096578 (thumb)

undefined4 sub_08096578(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  uVar1 = DAT_02030108 & 0x40;
  if ((DAT_02030108 & 0x40) == 0) {
    if (1 < *(byte *)(iVar2 + 0xc)) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(uint *)(param_1 + 0x8c) = uVar1;
      *(uint *)(param_1 + 0x90) = uVar1;
      *(char *)(param_1 + 0x94) = (char)uVar1;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    }
    if (*(char *)(param_1 + 0xe) == '\0') {
      sub_08007390(param_1 + 0x74,&DAT_08366854);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    else if (*(char *)(param_1 + 0xe) != '\x01') {
      return in_lr;
    }
    if (*(int *)(iVar2 + 0xb8) == 0) {
      sub_08007390(param_1 + 0x74,&DAT_08366854);
    }
    else {
      sub_08007390(param_1 + 0x74,&DAT_083669a4);
    }
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar2 + 0x54);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar2 + 0x58);
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}

