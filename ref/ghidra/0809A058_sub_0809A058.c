// sub_0809A058 at 0x0809A058 (thumb)

undefined8 sub_0809A058(void)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_08005458(DAT_0202300c);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    *(undefined *)(iVar1 + 9) = 0x4e;
    *(undefined4 *)(iVar1 + 0x14) = 0x809a109;
    *(undefined2 *)(iVar1 + 0x1c) = DAT_020230ac;
    *(undefined *)(iVar1 + 0x1e) = DAT_0202310e;
    *(undefined *)(iVar1 + 0x10) = 2;
    *(undefined *)(iVar1 + 0x11) = 0;
  }
  return CONCAT44(in_lr,iVar1);
}

